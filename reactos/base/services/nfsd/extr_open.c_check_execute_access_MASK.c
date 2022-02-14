
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int path; } ;
struct TYPE_5__ {TYPE_1__ path; int file; int session; } ;
typedef TYPE_2__ nfs41_open_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (int ,int *,int,int*,int*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(nfs41_open_state *VAR_3)
{
    uint32_t VAR_4, VAR_5;
    int VAR_6 = FUNC_2(VAR_3->session, &VAR_3->file,
        VAR_0 | VAR_1, &VAR_4, &VAR_5);
    if (VAR_6) {
        FUNC_1("nfs41_access() failed with %s for %s\n",
            FUNC_3(VAR_6), VAR_3->path.path);
        VAR_6 = VAR_2;
    } else if ((VAR_4 & VAR_0) == 0) {


        if ((VAR_4 & VAR_1) == 0 || (VAR_5 & VAR_1) == 0) {
            FUNC_1("server can't verify execute access, and user does "
                "not have read access to file %s\n", VAR_3->path.path);
            VAR_6 = VAR_2;
        }
    } else if ((VAR_5 & VAR_0) == 0) {
        FUNC_0(1, "user does not have execute access to file %s\n",
            VAR_3->path.path);
        VAR_6 = VAR_2;
    } else
        FUNC_0(2, "user has execute access to file\n");
    return VAR_6;
}
