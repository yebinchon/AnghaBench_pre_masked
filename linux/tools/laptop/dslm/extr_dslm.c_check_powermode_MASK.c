
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int,int ,unsigned char**) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(int VAR_5)
{
    unsigned char VAR_6[4] = {VAR_2,0,0,0};
    int VAR_7;

    if (FUNC_1(VAR_5, VAR_1, &VAR_6)
 && (VAR_6[0] = VAR_3)
 && FUNC_1(VAR_5, VAR_1, &VAR_6)) {
 if (VAR_4 != VAR_0 || VAR_6[0] != 0 || VAR_6[1] != 0) {
     VAR_7 = -1;
 } else
     VAR_7 = 0;
    } else {
 VAR_7 = (VAR_6[2] == 255) ? 1 : 0;
    }
    FUNC_0(FUNC_2(" drive state is:  %d\n", VAR_7));

    return VAR_7;
}
