
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int cidl; int* aoffset; } ;
typedef int LPITEMIDLIST ;
typedef TYPE_1__* LPIDA ;
typedef scalar_t__ LPBYTE ;
typedef int HGLOBAL ;
typedef int CIDA ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int *,int) ;
 int FUNC_5 (scalar_t__,int ,int) ;

HGLOBAL FUNC_6 (LPITEMIDLIST VAR_2, LPITEMIDLIST * VAR_3, UINT VAR_4)
{
 UINT VAR_5;
 int VAR_6 = 0, VAR_7, VAR_8;
 HGLOBAL VAR_9;
 LPIDA VAR_10;

 FUNC_4("(%p,%p,%u)\n", VAR_2, VAR_3, VAR_4);


 VAR_8 = sizeof(CIDA) + sizeof (UINT)*(VAR_4);
 VAR_8 += FUNC_3 (VAR_2);
 for(VAR_5=0; VAR_5<VAR_4; VAR_5++)
 {
   VAR_8 += FUNC_3(VAR_3[VAR_5]);
 }


 VAR_9 = FUNC_0(VAR_0|VAR_1, VAR_8);
 if(!VAR_9) return VAR_9;
 VAR_10 = FUNC_1 (VAR_9);
 VAR_10->cidl = VAR_4;


 VAR_6 = sizeof(CIDA) + sizeof (UINT)*(VAR_4);
 VAR_10->aoffset[0] = VAR_6;
 VAR_7 = FUNC_3 (VAR_2);
 FUNC_5(((LPBYTE)VAR_10)+VAR_6, VAR_2, VAR_7);
 VAR_6 += VAR_7;

 for(VAR_5=0; VAR_5<VAR_4; VAR_5++)
 {
   VAR_10->aoffset[VAR_5+1] = VAR_6;
   VAR_7 = FUNC_3(VAR_3[VAR_5]);
   FUNC_5(((LPBYTE)VAR_10)+VAR_6, VAR_3[VAR_5], VAR_7);
   VAR_6 += VAR_7;
 }

 FUNC_2(VAR_9);
 return VAR_9;
}
