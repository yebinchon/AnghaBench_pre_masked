
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int pg_wchar ;
struct TYPE_4__ {size_t encoding; } ;
struct TYPE_3__ {int (* wchar2mb_with_len ) (int const*,unsigned char*,int) ;} ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int const*,unsigned char*,int) ;

int
FUNC_1(const pg_wchar *VAR_2, char *VAR_3, int VAR_4)
{
 return VAR_1[VAR_0->encoding].wchar2mb_with_len(VAR_2, (unsigned char *) VAR_3, VAR_4);
}
