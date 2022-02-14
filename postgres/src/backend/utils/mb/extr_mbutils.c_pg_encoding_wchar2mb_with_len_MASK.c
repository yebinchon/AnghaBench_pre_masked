
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pg_wchar ;
struct TYPE_2__ {int (* wchar2mb_with_len ) (int const*,unsigned char*,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int const*,unsigned char*,int) ;

int
FUNC_1(int VAR_1,
         const pg_wchar *VAR_2, char *VAR_3, int VAR_4)
{
 return VAR_0[VAR_1].wchar2mb_with_len(VAR_2, (unsigned char *) VAR_3, VAR_4);
}
