
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 size_t FUNC_1 (int ,int *,unsigned char*,int) ;
 int FUNC_2 (int ,int ,unsigned char*,size_t) ;
 int VAR_2 ;
 int * FUNC_3 (int ,int ,int) ;
 int * FUNC_4 (int ,int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (unsigned char*,size_t) ;

__attribute__((used)) static void FUNC_6(int VAR_6)
{
 fz_stream *VAR_7;
 unsigned char VAR_8[2048];
 size_t VAR_9;

 VAR_4 = 0;

 if (VAR_5)
  VAR_7 = FUNC_4(VAR_0, VAR_1, VAR_6);
 else
  VAR_7 = FUNC_3(VAR_0, VAR_1, VAR_6);

 while (1)
 {
  VAR_9 = FUNC_1(VAR_0, VAR_7, VAR_8, sizeof VAR_8);
  if (VAR_9 == 0)
   break;
  if (VAR_3)
   FUNC_2(VAR_0, VAR_2, VAR_8, VAR_9);
  else
   FUNC_5(VAR_8, VAR_9);
 }

 FUNC_0(VAR_0, VAR_7);
}
