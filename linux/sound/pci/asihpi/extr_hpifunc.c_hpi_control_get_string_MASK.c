
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_8__ {int remaining_chars; char* sz_data; } ;
struct TYPE_9__ {TYPE_3__ chars8; } ;
struct TYPE_10__ {TYPE_4__ cu; } ;
struct hpi_response {TYPE_5__ u; scalar_t__ error; } ;
struct TYPE_6__ {unsigned int param1; scalar_t__ param2; scalar_t__ attribute; } ;
struct TYPE_7__ {TYPE_1__ c; } ;
struct hpi_message {TYPE_2__ u; int obj_index; int adapter_index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int const,int *,int *) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;

__attribute__((used)) static u16 FUNC_3(const u32 VAR_4, const u16 VAR_5,
 char *VAR_6, const u32 VAR_7)
{
 unsigned int VAR_8 = 0, VAR_9 = 0;
 char VAR_10 = 0;
 unsigned int VAR_11 = 0;
 u16 VAR_12 = 0;

 if ((VAR_7 < 1) || (VAR_7 > 256))
  return VAR_1;
 for (VAR_8 = 0; VAR_8 < VAR_7;
  VAR_8 += 8) {
  struct hpi_message VAR_13;
  struct hpi_response VAR_14;

  FUNC_1(&VAR_13, &VAR_14, VAR_3,
   VAR_0);
  if (FUNC_0(VAR_4, &VAR_13.adapter_index,
    &VAR_13.obj_index))
   return VAR_2;
  VAR_13.u.c.attribute = VAR_5;
  VAR_13.u.c.param1 = VAR_8;
  VAR_13.u.c.param2 = 0;
  FUNC_2(&VAR_13, &VAR_14);

  if (VAR_8 == 0
   && (VAR_14.u.cu.chars8.remaining_chars + 8) >
   VAR_7)
   return VAR_1;

  if (VAR_14.error) {
   VAR_12 = VAR_14.error;
   break;
  }
  for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
   VAR_10 = VAR_14.u.cu.chars8.sz_data[VAR_9];
   VAR_6[VAR_8 + VAR_9] = VAR_10;
   VAR_11++;
   if (VAR_11 >= VAR_7) {
    VAR_6[VAR_7 - 1] = 0;
    VAR_12 = VAR_1;
    break;
   }
   if (VAR_10 == 0)
    break;
  }

  if ((VAR_14.u.cu.chars8.remaining_chars == 0)
   && ((VAR_8 + VAR_9) < VAR_7)
   && (VAR_10 != 0)) {
   VAR_10 = 0;
   VAR_6[VAR_8 + VAR_9] = VAR_10;
  }
  if (VAR_10 == 0)
   break;
 }
 return VAR_12;
}
