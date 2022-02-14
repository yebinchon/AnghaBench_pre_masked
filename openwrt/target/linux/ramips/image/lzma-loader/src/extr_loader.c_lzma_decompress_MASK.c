
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * Probs; } ;
typedef int SizeT ;
typedef int CProb ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *,int ,int*,unsigned char*,int ,int*) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_6)
{
 SizeT VAR_7, VAR_8;
 int VAR_9;

 VAR_4.Probs = (CProb *) VAR_5;

 VAR_9 = FUNC_1(&VAR_4, VAR_1, VAR_2, &VAR_7, VAR_6,
    VAR_3, &VAR_8);

 if (VAR_9 != VAR_0) {
  int VAR_10;

  FUNC_0("LzmaDecode error %d at %08x, osize:%d ip:%d op:%d\n",
      VAR_9, VAR_1 + VAR_7, VAR_3, VAR_7, VAR_8);

  for (VAR_10 = 0; VAR_10 < 16; VAR_10++)
   FUNC_0("%02x ", VAR_1[VAR_7 + VAR_10]);

  FUNC_0("\n");
 }

 return VAR_9;
}
