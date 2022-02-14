
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mcbsp {int dma_op_mode; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char**) ;
 struct omap_mcbsp* FUNC_1 (struct device*) ;
 char** VAR_0 ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct omap_mcbsp *VAR_4 = FUNC_1(VAR_1);
 int VAR_5, VAR_6 = 0;
 ssize_t VAR_7 = 0;
 const char * const *VAR_8;

 VAR_5 = VAR_4->dma_op_mode;

 for (VAR_8 = &VAR_0[VAR_6]; VAR_6 < FUNC_0(VAR_0); VAR_8++, VAR_6++) {
  if (VAR_5 == VAR_6)
   VAR_7 += FUNC_2(VAR_3 + VAR_7, "[%s] ", *VAR_8);
  else
   VAR_7 += FUNC_2(VAR_3 + VAR_7, "%s ", *VAR_8);
 }
 VAR_7 += FUNC_2(VAR_3 + VAR_7, "\n");

 return VAR_7;
}
