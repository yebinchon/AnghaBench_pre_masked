
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section {unsigned int nb_lines; struct line* lines; } ;
struct line {int dummy; } ;
struct inf_file {unsigned int nb_sections; struct section** sections; } ;



__attribute__((used)) static inline struct line *FUNC_0( struct inf_file *VAR_0, unsigned int VAR_1,
                                     unsigned int VAR_2 )
{
    struct section *VAR_3;

    if (VAR_1 >= VAR_0->nb_sections) return ((void*)0);
    VAR_3 = VAR_0->sections[VAR_1];
    if (VAR_2 >= VAR_3->nb_lines) return ((void*)0);
    return &VAR_3->lines[VAR_2];
}
