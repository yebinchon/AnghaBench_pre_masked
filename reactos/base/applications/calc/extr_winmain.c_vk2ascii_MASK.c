
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HKL ;
typedef int BYTE ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned int,int ,int ) ;
 scalar_t__ FUNC_4 (unsigned int,int,int *,unsigned short*,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_5)
{
    unsigned short int VAR_6;
    int VAR_7;
    BYTE VAR_8[256];
    HKL VAR_9=FUNC_1(0);

    if(!FUNC_2(VAR_8))
        return 0;

    VAR_7=FUNC_3(VAR_5, 0, VAR_9);
    VAR_6 = 0;
    if (FUNC_4(VAR_5, VAR_7, VAR_8, &VAR_6, 0, VAR_9)>0) {

        if (VAR_6 >= 'a' && VAR_6 <= 'z')
            VAR_6 = VAR_6 - 'a' + 'A';

        if (VAR_5 >= 'A' && VAR_5 <= 'Z' &&
            VAR_6 >= VAR_1 && VAR_6 <= VAR_3)
            VAR_6 |= VAR_2;
        else
        if (FUNC_0(VAR_4) < 0)
            VAR_6 |= VAR_0;
        return VAR_6;
    }
    return 0;
}
