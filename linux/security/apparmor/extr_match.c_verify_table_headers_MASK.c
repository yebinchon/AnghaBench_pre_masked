
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_header {size_t td_lolen; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;

__attribute__((used)) static int FUNC_2(struct table_header **VAR_8, int VAR_9)
{
 size_t VAR_10, VAR_11;
 int VAR_12 = -VAR_0;


 if (!(VAR_8[VAR_5] && VAR_8[VAR_3] &&
       VAR_8[VAR_7] && VAR_8[VAR_4]))
  goto out;


 VAR_10 = VAR_8[VAR_3]->td_lolen;
 if (FUNC_0(VAR_9)) {
  if (!VAR_8[VAR_1])
   goto out;
  if (VAR_10 != VAR_8[VAR_1]->td_lolen)
   goto out;
 }
 if (FUNC_1(VAR_9)) {
  if (!VAR_8[VAR_2])
   goto out;
  if (VAR_10 != VAR_8[VAR_2]->td_lolen)
   goto out;
 }
 if (VAR_10 != VAR_8[VAR_5]->td_lolen)
  goto out;


 VAR_11 = VAR_8[VAR_7]->td_lolen;
 if (VAR_11 != VAR_8[VAR_4]->td_lolen)
  goto out;


 if (VAR_8[VAR_6] && VAR_8[VAR_6]->td_lolen != 256)
  goto out;

 VAR_12 = 0;
out:
 return VAR_12;
}
