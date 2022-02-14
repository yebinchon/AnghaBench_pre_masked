
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TRACKBAR_INFO ;
typedef int LONG ;
typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,int ,int ,int) ;

__attribute__((used)) static inline void
FUNC_1 (const TRACKBAR_INFO *VAR_3, HDC VAR_4, LONG VAR_5, int VAR_6)
{
    if ((VAR_6 & (VAR_1 | VAR_2)) || (VAR_6 & VAR_0))
        FUNC_0 (VAR_3, VAR_4, VAR_5, VAR_6 | VAR_1);

    if (!(VAR_6 & (VAR_1 | VAR_2)) || (VAR_6 & VAR_0))
        FUNC_0 (VAR_3, VAR_4, VAR_5, VAR_6 & ~VAR_1);
}
