
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_uring {int dummy; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct io_uring*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct io_uring*) ;
 scalar_t__ FUNC_4 (char*,int,...) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (int ,struct io_uring*) ;

int FUNC_8(int VAR_7, char *VAR_8[])
{
 struct io_uring VAR_9;
 off_t VAR_10;
 int VAR_11;

 if (VAR_7 < 3) {
  FUNC_6("%s: infile outfile\n", VAR_8[0]);
  return 1;
 }

 VAR_5 = FUNC_4(VAR_8[1], VAR_1);
 if (VAR_5 < 0) {
  FUNC_5("open infile");
  return 1;
 }
 VAR_6 = FUNC_4(VAR_8[2], VAR_3 | VAR_0 | VAR_2, 0644);
 if (VAR_6 < 0) {
  FUNC_5("open outfile");
  return 1;
 }

 if (FUNC_7(VAR_4, &VAR_9))
  return 1;
 if (FUNC_2(VAR_5, &VAR_10))
  return 1;

 VAR_11 = FUNC_1(&VAR_9, VAR_10);

 FUNC_0(VAR_5);
 FUNC_0(VAR_6);
 FUNC_3(&VAR_9);
 return VAR_11;
}
