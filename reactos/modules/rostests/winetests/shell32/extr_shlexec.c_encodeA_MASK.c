
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int encoded ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char*,unsigned char) ;
 int VAR_0 ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static const char* FUNC_4(const char* VAR_1)
{
    static char VAR_2[2*1024+1];
    char* VAR_3;
    size_t VAR_4,VAR_5;

    if (!VAR_1) return "";
    VAR_4 = FUNC_3(VAR_1) + 1;
    if (VAR_4 >= sizeof(VAR_2)/2)
    {
        FUNC_1(VAR_0, "string is too long!\n");
        FUNC_0(0);
    }
    VAR_3 = VAR_2;
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
        FUNC_2(&VAR_3[VAR_5 * 2], "%02x", (unsigned char)VAR_1[VAR_5]);
    VAR_3[2 * VAR_4] = '\0';
    return VAR_3;
}
