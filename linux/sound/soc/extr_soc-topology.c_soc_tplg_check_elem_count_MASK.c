
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct soc_tplg {int dev; TYPE_1__* fw; int * pos; } ;
struct TYPE_2__ {int size; int const* data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,...) ;

__attribute__((used)) static int FUNC_1(struct soc_tplg *VAR_1, size_t VAR_2,
 unsigned int VAR_3, size_t VAR_4, const char *VAR_5)
{
 const u8 *VAR_6 = VAR_1->pos + VAR_2 * VAR_3;

 if (VAR_6 > VAR_1->fw->data + VAR_1->fw->size) {
  FUNC_0(VAR_1->dev, "ASoC: %s overflow end of data\n",
   VAR_5);
  return -VAR_0;
 }



 if (VAR_2 * VAR_3 > VAR_4) {
  FUNC_0(VAR_1->dev,
   "ASoC: %s count %d of size %zu is bigger than chunk %zu\n",
   VAR_5, VAR_3, VAR_2, VAR_4);
  return -VAR_0;
 }

 return 0;
}
