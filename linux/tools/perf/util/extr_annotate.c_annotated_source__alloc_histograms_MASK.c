
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_hist_entry {int dummy; } ;
struct sym_hist {int dummy; } ;
struct annotated_source {size_t sizeof_sym_hist; int nr_histograms; int histograms; } ;


 int VAR_0 ;
 int FUNC_0 (int,size_t) ;

__attribute__((used)) static int FUNC_1(struct annotated_source *VAR_1,
           size_t VAR_2, int VAR_3)
{
 size_t VAR_4;
 if (VAR_2 == 0)
  VAR_2 = 1;


 if (VAR_2 > (VAR_0 - sizeof(struct sym_hist)) / sizeof(struct sym_hist_entry))
  return -1;

 VAR_4 = (sizeof(struct sym_hist) + VAR_2 * sizeof(struct sym_hist_entry));


 if (VAR_4 > VAR_0 / VAR_3)
  return -1;

 VAR_1->sizeof_sym_hist = VAR_4;
 VAR_1->nr_histograms = VAR_3;
 VAR_1->histograms = FUNC_0(VAR_3, VAR_4) ;
 return VAR_1->histograms ? 0 : -1;
}
