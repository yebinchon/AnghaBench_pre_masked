
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(struct dentry *VAR_3, char *VAR_4,
    size_t VAR_5)
{
 ssize_t VAR_6;
 ssize_t VAR_7 = 0;

 VAR_6 = FUNC_2(FUNC_0(VAR_3), VAR_4, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_7 += VAR_6;
 if (VAR_4) {
  if (VAR_5 < VAR_7)
   return -VAR_0;
  VAR_4 += VAR_6;
 }

 VAR_6 = (VAR_2 + 1);
 VAR_7 += VAR_6;
 if (VAR_4) {
  if (VAR_5 < VAR_7)
   return -VAR_0;
  FUNC_1(VAR_4, VAR_1, VAR_6);
  VAR_4 += VAR_6;
 }

 return VAR_7;
}
