
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_index {int step; scalar_t__ fill; } ;
typedef int off_t ;



__attribute__((used)) static off_t FUNC_0(struct frame_index *VAR_0)
{
 return (off_t)VAR_0->fill*VAR_0->step;
}
