
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uv_file ;
struct rrdengine_journalfile {struct rrdengine_datafile* datafile; scalar_t__ pos; scalar_t__ file; } ;
struct rrdengine_datafile {int dummy; } ;



void FUNC_0(struct rrdengine_journalfile *VAR_0, struct rrdengine_datafile *VAR_1)
{
    VAR_0->file = (uv_file)0;
    VAR_0->pos = 0;
    VAR_0->datafile = VAR_1;
}
