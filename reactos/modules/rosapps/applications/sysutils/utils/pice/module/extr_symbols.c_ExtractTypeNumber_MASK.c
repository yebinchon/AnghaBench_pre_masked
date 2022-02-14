
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__ LPSTR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,char) ;

ULONG FUNC_3(LPSTR VAR_0)
{
 LPSTR VAR_1;
 ULONG VAR_2 = 0;

    FUNC_0((0,"ExtractTypeNumber(%s)\n",VAR_0));

 VAR_1 = FUNC_2(VAR_0,'(');

 if(VAR_1)
 {
  VAR_1++;
  VAR_2 = FUNC_1(VAR_1);
  VAR_2 <<= 16;
  VAR_1 = FUNC_2(VAR_0,',');
        if(VAR_1)
        {
      VAR_1++;
      VAR_2 += FUNC_1(VAR_1);
        }
        else
        {
            VAR_2 = 0;
        }
 }
 return VAR_2;
}
