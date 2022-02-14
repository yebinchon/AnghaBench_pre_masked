
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct trace_array*,unsigned long,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static ssize_t FUNC_4(struct trace_array *VAR_5,
       unsigned long VAR_6, int VAR_7)
{
 int VAR_8 = VAR_6;

 FUNC_2(&VAR_3);

 if (VAR_7 != VAR_2) {

  if (!FUNC_1(VAR_7, VAR_4)) {
   VAR_8 = -VAR_0;
   goto out;
  }
 }

 VAR_8 = FUNC_0(VAR_5, VAR_6, VAR_7);
 if (VAR_8 < 0)
  VAR_8 = -VAR_1;

out:
 FUNC_3(&VAR_3);

 return VAR_8;
}
