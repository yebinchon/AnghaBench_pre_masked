
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_7__ {int** sector_data; } ;
typedef TYPE_1__ region ;
struct TYPE_8__ {int x; int z; int len; int refcount; void* data; } ;
typedef TYPE_2__ compressed_chunk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__*** VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (void*,int,int,int ) ;
 int FUNC_2 (int ,int,int ) ;
 TYPE_1__* FUNC_3 (int,int) ;
 int VAR_6 ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static compressed_chunk *FUNC_6(int VAR_7, int VAR_8)
{
   int VAR_9 = VAR_7 & (VAR_0-1);
   int VAR_10 = VAR_8 & (VAR_1-1);
   compressed_chunk *VAR_11 = VAR_5[VAR_10][VAR_9];

   if (VAR_11 && VAR_11->x == VAR_7 && VAR_11->z == VAR_8)
      return VAR_11;
   else {
      int VAR_12 = VAR_7 >> VAR_3;
      int VAR_13 = VAR_8 >> VAR_3;
      region *VAR_14 = FUNC_3(VAR_12, VAR_13);
      if (VAR_11) {
         FUNC_0(VAR_11);
         VAR_5[VAR_10][VAR_9] = ((void*)0);
      }
      VAR_11 = FUNC_4(sizeof(*VAR_11));
      VAR_11->x = VAR_7;
      VAR_11->z = VAR_8;
      {
         int VAR_15 = VAR_7 & (VAR_2-1);
         int VAR_16 = VAR_8 & (VAR_2-1);
         uint32 VAR_17 = VAR_14->sector_data[VAR_16][VAR_15];

         if (VAR_17 & 255) {
            FUNC_5(VAR_12, VAR_13);
            FUNC_2(VAR_6, (VAR_17>>8)*4096, VAR_4);
            VAR_11->len = (VAR_17&255)*4096;
            VAR_11->data = FUNC_4(VAR_11->len);
            FUNC_1(VAR_11->data, 1, VAR_11->len, VAR_6);
         } else {
            VAR_11->len = 0;
            VAR_11->data = 0;
         }
      }
      VAR_11->refcount = 1;
      VAR_5[VAR_10][VAR_9] = VAR_11;
      return VAR_11;
   }
}
