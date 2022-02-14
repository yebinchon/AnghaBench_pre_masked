
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_2__ {scalar_t__ next; scalar_t__ filesize; } ;
struct Output {TYPE_1__ rotate; scalar_t__ is_virgin_file; } ;
typedef scalar_t__ int64_t ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(const struct Output *VAR_0, time_t VAR_1, FILE *VAR_2)
{
    if (VAR_0->is_virgin_file)
        return 0;
    if (VAR_1 >= VAR_0->rotate.next)
        return 1;
    if (VAR_0->rotate.filesize != 0 &&
        FUNC_0(VAR_2) >= (int64_t)VAR_0->rotate.filesize)
        return 1;
    return 0;
}
