
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef int UPDOWN_INFO ;
typedef int LRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (int) ;

__attribute__((used)) static LRESULT FUNC_4(UPDOWN_INFO *VAR_5, WPARAM VAR_6)
{
    int VAR_7 = FUNC_0(VAR_6) / VAR_4;

    if (VAR_6 & (VAR_3 | VAR_2))
        return 0;

    if (VAR_7 != 0)
    {
        FUNC_2(VAR_5);
        FUNC_1(VAR_5, FUNC_3(VAR_7), VAR_7 > 0 ? VAR_1 : VAR_0);
    }

    return 1;
}
