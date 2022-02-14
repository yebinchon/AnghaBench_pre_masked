
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct hpi_control_cache_info {size_t control_index; int size_in32bit_words; scalar_t__ control_type; } ;
struct hpi_control_cache {unsigned int init; unsigned int control_count; unsigned int cache_size_in_bytes; int adap_idx; struct hpi_control_cache_info** p_info; scalar_t__ p_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static unsigned int FUNC_1(struct hpi_control_cache *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7 = 0;
 if (!VAR_5)
  return 0;

 if (VAR_5->init)
  return VAR_5->init;

 if (!VAR_5->p_cache)
  return 0;

 if (VAR_5->control_count && VAR_5->cache_size_in_bytes) {
  char *VAR_8;
  unsigned int VAR_9 = 0;

  VAR_8 = (char *)VAR_5->p_cache;
  FUNC_0(VAR_0, "check %d controls\n",
   VAR_5->control_count);
  for (VAR_6 = 0; VAR_6 < VAR_5->control_count; VAR_6++) {
   struct hpi_control_cache_info *VAR_10 =
    (struct hpi_control_cache_info *)
    &VAR_8[VAR_9];
   u16 VAR_11 = VAR_10->control_index;

   if (VAR_11 >= VAR_5->control_count) {
    FUNC_0(VAR_2,
     "adap %d control index %d out of range, cache not ready?\n",
     VAR_5->adap_idx, VAR_11);
    return 0;
   }

   if (!VAR_10->size_in32bit_words) {
    if (!VAR_6) {
     FUNC_0(VAR_2,
      "adap %d cache not ready?\n",
      VAR_5->adap_idx);
     return 0;
    }




    FUNC_0(VAR_1,
     "adap %d zero size cache entry %d\n",
     VAR_5->adap_idx, VAR_6);
    break;
   }

   if (VAR_10->control_type) {
    VAR_5->p_info[VAR_11] = VAR_10;
    VAR_7++;
   } else {
    VAR_5->p_info[VAR_11] = ((void*)0);
   }

   VAR_9 += VAR_10->size_in32bit_words * 4;

   FUNC_0(VAR_3,
    "cached %d, pinfo %p index %d type %d size %d\n",
    VAR_7, VAR_5->p_info[VAR_10->control_index],
    VAR_10->control_index, VAR_10->control_type,
    VAR_10->size_in32bit_words);





   if (VAR_9 >= VAR_5->cache_size_in_bytes)
    break;

   if (VAR_10->control_index == VAR_5->control_count - 1)
    break;
  }

  if (VAR_9 != VAR_5->cache_size_in_bytes)
   FUNC_0(VAR_4,
    "adap %d bytecount %d != cache size %d\n",
    VAR_5->adap_idx, VAR_9,
    VAR_5->cache_size_in_bytes);
  else
   FUNC_0(VAR_0,
    "adap %d cache good, bytecount == cache size = %d\n",
    VAR_5->adap_idx, VAR_9);

  VAR_5->init = (u16)VAR_7;
 }
 return VAR_5->init;
}
