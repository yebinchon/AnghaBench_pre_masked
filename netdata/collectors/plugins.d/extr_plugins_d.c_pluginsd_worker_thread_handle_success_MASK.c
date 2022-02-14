
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plugind {int successful_collections; int update_every; scalar_t__ serial_failures; char* pid; scalar_t__ enabled; int fullfilename; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,char*,scalar_t__) ;
 int FUNC_1 (char*,int ,char*,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(struct plugind *VAR_1) {
    if (FUNC_2(VAR_1->successful_collections)) {
        FUNC_3((unsigned int) VAR_1->update_every);
        return;
    }

    if(FUNC_2(VAR_1->serial_failures <= VAR_0)) {
        FUNC_1("'%s' (pid %d) does not generate useful output but it reports success (exits with 0). %s.",
            VAR_1->fullfilename, VAR_1->pid,
            VAR_1->enabled ?
                "Waiting a bit before starting it again." :
                "Will not start it again - it is now disabled.");
        FUNC_3((unsigned int) (VAR_1->update_every * 10));
        return;
    }

    if (VAR_1->serial_failures > VAR_0) {
        FUNC_0("'%s' (pid %d) does not generate useful output, although it reports success (exits with 0)."
            "We have tried to collect something %zu times - unsuccessfully. Disabling it.",
            VAR_1->fullfilename, VAR_1->pid, VAR_1->serial_failures);
        VAR_1->enabled = 0;
        return;
    }

    return;
}
