
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct annotation_write_ops {int write_graph; int printf; int set_jumps_percent_color; int set_percent_color; int set_color; int obj; int width; int change_color; int current_entry; int first_line; } ;
struct annotation_options {int percent_type; } ;
struct annotation_line {int dummy; } ;
struct annotation {int dummy; } ;


 int FUNC_0 (struct annotation_line*,struct annotation*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

void FUNC_1(struct annotation_line *VAR_0, struct annotation *VAR_1,
       struct annotation_write_ops *VAR_2,
       struct annotation_options *VAR_3)
{
 FUNC_0(VAR_0, VAR_1, VAR_2->first_line, VAR_2->current_entry,
     VAR_2->change_color, VAR_2->width, VAR_2->obj,
     VAR_3->percent_type,
     VAR_2->set_color, VAR_2->set_percent_color,
     VAR_2->set_jumps_percent_color, VAR_2->printf,
     VAR_2->write_graph);
}
