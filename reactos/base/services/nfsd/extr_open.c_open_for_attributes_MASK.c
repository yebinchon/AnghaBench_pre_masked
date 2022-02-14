
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ ULONG ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static BOOLEAN FUNC_1(uint32_t VAR_13, ULONG VAR_14,
                                   ULONG VAR_15, int VAR_16)
{
    if (VAR_13 == VAR_11) {
        if (VAR_15 == VAR_4 || VAR_15 == VAR_6 ||
                (!VAR_16 && (VAR_15 == VAR_5 ||
                    VAR_15 == VAR_7 ||
                    VAR_15 == VAR_9))) {
            FUNC_0(1, "Opening a directory\n");
            return VAR_12;
        } else {
            FUNC_0(1, "Creating a directory\n");
            return VAR_0;
        }
    }

    if ((VAR_14 & VAR_8) ||
            (VAR_14 & VAR_10) ||
            (VAR_14 & VAR_1) ||
            (VAR_14 & VAR_3) ||
            VAR_15 == VAR_2 ||
            VAR_15 == VAR_7 ||
            VAR_15 == VAR_9 ||
            VAR_15 == VAR_5 ||
            VAR_15 == VAR_6)
        return VAR_0;
    else {
        FUNC_0(1, "Open call that wants to manage attributes\n");
        return VAR_12;
    }
}
