
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pid_stat {int log_thrown; char* pid; char* comm; } ;


 scalar_t__ VAR_0 ;





 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,char*,...) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(struct pid_stat *VAR_4, uint32_t VAR_5, int VAR_6) {
    if(FUNC_1(!VAR_6)) {


        if(FUNC_1(VAR_1 || VAR_2 != VAR_0)) {
            if(FUNC_1(VAR_1 || !(VAR_4->log_thrown & VAR_5))) {
                VAR_4->log_thrown |= VAR_5;
                switch(VAR_5) {
                    case 130:



                        FUNC_0("Cannot process %s/proc/%d/io (command '%s')", VAR_3, VAR_4->pid, VAR_4->comm);

                        break;

                    case 128:



                        FUNC_0("Cannot process %s/proc/%d/status (command '%s')", VAR_3, VAR_4->pid, VAR_4->comm);

                        break;

                    case 132:



                        FUNC_0("Cannot process %s/proc/%d/cmdline (command '%s')", VAR_3, VAR_4->pid, VAR_4->comm);

                        break;

                    case 131:



                        FUNC_0("Cannot process entries in %s/proc/%d/fd (command '%s')", VAR_3, VAR_4->pid, VAR_4->comm);

                        break;

                    case 129:
                        break;

                    default:
                        FUNC_0("unhandled error for pid %d, command '%s'", VAR_4->pid, VAR_4->comm);
                        break;
                }
            }
        }
        VAR_2 = 0;
    }
    else if(FUNC_1(VAR_4->log_thrown & VAR_5)) {

        VAR_4->log_thrown &= ~VAR_5;
    }

    return VAR_6;
}
