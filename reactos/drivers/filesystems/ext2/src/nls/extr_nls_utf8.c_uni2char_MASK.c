
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_1(wchar_t VAR_1, unsigned char *VAR_2, int VAR_3)
{
    int VAR_4;

    if ( (VAR_4 = FUNC_0(VAR_2, VAR_1, VAR_3)) == -1) {
        *VAR_2 = '?';
        return -VAR_0;
    }
    return VAR_4;
}
