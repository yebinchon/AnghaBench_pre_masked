
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mcbsp_st_data {int* taps; int nr_taps; } ;
struct omap_mcbsp {int lock; struct omap_mcbsp_st_data* st_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct omap_mcbsp* FUNC_0 (struct device*) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,char*,int*,int*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
        struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct omap_mcbsp *VAR_5 = FUNC_0(VAR_1);
 struct omap_mcbsp_st_data *VAR_6 = VAR_5->st_data;
 int VAR_7, VAR_8, VAR_9, VAR_10 = 0;

 FUNC_2(&VAR_5->lock);
 FUNC_1(VAR_6->taps, 0, sizeof(VAR_6->taps));
 VAR_6->nr_taps = 0;

 do {
  VAR_9 = FUNC_4(VAR_3, "%d%n", &VAR_7, &VAR_8);
  if (VAR_9 < 0 || VAR_9 == 0) {
   VAR_4 = -VAR_0;
   goto out;
  }
  if (VAR_7 < -32768 || VAR_7 > 32767) {
   VAR_4 = -VAR_0;
   goto out;
  }
  VAR_6->taps[VAR_10++] = VAR_7;
  VAR_3 += VAR_8;
  if (*VAR_3 != ',')
   break;
  VAR_3++;
 } while (1);

 VAR_6->nr_taps = VAR_10;

out:
 FUNC_3(&VAR_5->lock);

 return VAR_4;
}
