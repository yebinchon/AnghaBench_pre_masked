
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArrayFlagsObject ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (char*,char*,int ,char*,int ,char*,int ,char*,int ,char const*,char*,int ,char*,int ,char*,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static PyObject *
FUNC_2(PyArrayFlagsObject *VAR_8)
{
    int VAR_9 = VAR_8->flags;
    const char *VAR_10 = "";

    if (VAR_9 & VAR_5) {
        VAR_10 = "  (with WARN_ON_WRITE=True)";
    }
    return FUNC_0(
                        "  %s : %s\n  %s : %s\n"
                        "  %s : %s\n  %s : %s%s\n"
                        "  %s : %s\n  %s : %s\n"
                        "  %s : %s\n",
                        "C_CONTIGUOUS", FUNC_1(VAR_9, VAR_1),
                        "F_CONTIGUOUS", FUNC_1(VAR_9, VAR_2),
                        "OWNDATA", FUNC_1(VAR_9, VAR_3),
                        "WRITEABLE", FUNC_1(VAR_9, VAR_6),
                        VAR_10,
                        "ALIGNED", FUNC_1(VAR_9, VAR_0),
                        "WRITEBACKIFCOPY", FUNC_1(VAR_9, VAR_7),
                        "UPDATEIFCOPY", FUNC_1(VAR_9, VAR_4)
    );
}
