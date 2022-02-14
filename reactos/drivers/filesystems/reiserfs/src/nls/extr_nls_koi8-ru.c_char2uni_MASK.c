
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_2__ {scalar_t__ (* char2uni ) (int const,int,int*) ;} ;
typedef int PUCHAR ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int const,int,int*) ;

__attribute__((used)) static int FUNC_1(const unsigned char *VAR_1, int VAR_2,
      wchar_t *VAR_3)
{
 int VAR_4;

 if ((*VAR_1 & 0xef) != 0xae) {

  *VAR_3 = (*VAR_1 & 0x10) ? 0x040e : 0x045e;
  return 1;
 }

 VAR_4 = (int)(VAR_0->char2uni((const PUCHAR)VAR_1, VAR_2,VAR_3));
 return VAR_4;
}
