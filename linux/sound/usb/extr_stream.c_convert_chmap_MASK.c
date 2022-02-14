
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_chmap_elem {unsigned int* map; int channels; } ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct snd_pcm_chmap_elem* FUNC_1 (int,int ) ;

__attribute__((used)) static struct snd_pcm_chmap_elem *FUNC_2(int VAR_4, unsigned int VAR_5,
      int VAR_6)
{
 static unsigned int VAR_7[] = {
  152,
  150,
  153,
  148,
  140,
  139,
  151,
  149,
  146,
  140,
  139,
  138,
  0
 };
 static unsigned int VAR_8[] = {
  152,
  150,
  153,
  148,
  145,
  142,
  151,
  149,
  146,
  140,
  139,
  138,
  136,
  137,
  134,
  131,
  132,
  130,
  135,
  133,
  147,
  143,
  129,
  128,
  154,
  144,
  141,
  0
 };
 struct snd_pcm_chmap_elem *VAR_9;
 const unsigned int *VAR_10;
 int VAR_11;

 if (VAR_4 > FUNC_0(VAR_9->map))
  return ((void*)0);

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return ((void*)0);

 VAR_10 = VAR_6 == VAR_3 ? VAR_8 : VAR_7;
 VAR_9->channels = VAR_4;
 VAR_11 = 0;

 if (VAR_5) {
  for (; VAR_5 && *VAR_10; VAR_10++, VAR_5 >>= 1)
   if (VAR_5 & 1)
    VAR_9->map[VAR_11++] = *VAR_10;
 } else {


  if (VAR_4 == 1)
   VAR_9->map[VAR_11++] = VAR_1;
  else
   for (; VAR_11 < VAR_4 && *VAR_10; VAR_10++)
    VAR_9->map[VAR_11++] = *VAR_10;
 }

 for (; VAR_11 < VAR_4; VAR_11++)
  VAR_9->map[VAR_11] = VAR_2;

 return VAR_9;
}
