
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int path; int io_valid; scalar_t__ io_output_bps; scalar_t__ io_input_bps; int memory_valid; scalar_t__ memory; int n_tasks_valid; scalar_t__ n_tasks; scalar_t__ cpu_usage; int cpu_valid; scalar_t__ cpu_fraction; } ;
typedef TYPE_1__ Group ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(Group * const *VAR_4, Group * const *VAR_5) {
        const Group *VAR_6 = *VAR_4, *VAR_7 = *VAR_5;
        int VAR_8;

        if (VAR_2 != 128 || VAR_3) {





                if (FUNC_3(FUNC_1(VAR_7->path), FUNC_1(VAR_6->path)))
                        return -1;
                if (FUNC_3(FUNC_1(VAR_6->path), FUNC_1(VAR_7->path)))
                        return 1;
        }

        switch (VAR_2) {

        case 129:
                break;

        case 132:
                if (VAR_1 == VAR_0) {
                        if (VAR_6->cpu_valid && VAR_7->cpu_valid) {
                                VAR_8 = FUNC_0(VAR_7->cpu_fraction, VAR_6->cpu_fraction);
                                if (VAR_8 != 0)
                                        return VAR_8;
                        } else if (VAR_6->cpu_valid)
                                return -1;
                        else if (VAR_7->cpu_valid)
                                return 1;
                } else {
                        VAR_8 = FUNC_0(VAR_7->cpu_usage, VAR_6->cpu_usage);
                        if (VAR_8 != 0)
                                return VAR_8;
                }

                break;

        case 128:
                if (VAR_6->n_tasks_valid && VAR_7->n_tasks_valid) {
                        VAR_8 = FUNC_0(VAR_7->n_tasks, VAR_6->n_tasks);
                        if (VAR_8 != 0)
                                return VAR_8;
                } else if (VAR_6->n_tasks_valid)
                        return -1;
                else if (VAR_7->n_tasks_valid)
                        return 1;

                break;

        case 130:
                if (VAR_6->memory_valid && VAR_7->memory_valid) {
                        VAR_8 = FUNC_0(VAR_7->memory, VAR_6->memory);
                        if (VAR_8 != 0)
                                return VAR_8;
                } else if (VAR_6->memory_valid)
                        return -1;
                else if (VAR_7->memory_valid)
                        return 1;

                break;

        case 131:
                if (VAR_6->io_valid && VAR_7->io_valid) {
                        VAR_8 = FUNC_0(VAR_7->io_input_bps + VAR_7->io_output_bps, VAR_6->io_input_bps + VAR_6->io_output_bps);
                        if (VAR_8 != 0)
                                return VAR_8;
                } else if (VAR_6->io_valid)
                        return -1;
                else if (VAR_7->io_valid)
                        return 1;
        }

        return FUNC_2(VAR_6->path, VAR_7->path);
}
