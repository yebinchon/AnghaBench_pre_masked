
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void sym_hist ;
struct annotated_source {int sizeof_sym_hist; scalar_t__ histograms; } ;



__attribute__((used)) static inline struct sym_hist *FUNC_0(struct annotated_source *VAR_0, int VAR_1)
{
 return ((void *)VAR_0->histograms) + (VAR_0->sizeof_sym_hist * VAR_1);
}
