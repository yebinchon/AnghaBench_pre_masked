
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stag_header {int dummy; } ;
struct sch2_header {int dummy; } ;
struct TYPE_5__ {scalar_t__ file_size; int file_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sch2_header*,char*,char*) ;
 int FUNC_2 (struct stag_header*,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__ VAR_6 ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,int,scalar_t__) ;
 int VAR_7 ;
 int FUNC_7 (TYPE_1__*,char*) ;
 TYPE_1__ VAR_8 ;
 int FUNC_8 (int ,char*,int) ;

int FUNC_9(void)
{
 char *VAR_9;
 char *VAR_10;
 char *VAR_11;
 int VAR_12 = VAR_1;
 int VAR_13;

 struct stag_header *VAR_14;
 struct sch2_header *VAR_15;

 if (!VAR_6.file_name | !VAR_8.file_name)
  goto out;

 VAR_12 = FUNC_4(&VAR_6);
 if (VAR_12)
  goto out;
 VAR_12 = FUNC_4(&VAR_8);
 if (VAR_12)
  goto out;

 VAR_9 = FUNC_5(VAR_5);
 if (!VAR_9) {
  FUNC_0("no memory for buffer\n");
  goto out;
 }

 if (VAR_8.file_size + VAR_6.file_size + VAR_0 >
     VAR_5) {
  FUNC_0("data is bigger than firmware_size!\n");
  goto out;
 }

 FUNC_6(VAR_9, 0xff, VAR_5);

 VAR_14 = (struct stag_header *)VAR_9;

 VAR_15 =
     (struct sch2_header *)((char *)VAR_14 + VAR_4);
 VAR_10 = (char *)VAR_15 + VAR_3;

 VAR_12 = FUNC_7(&VAR_6, VAR_10);
 if (VAR_12)
  goto out_free_buf;

 VAR_11 = VAR_10 + VAR_6.file_size;

 VAR_12 = FUNC_7(&VAR_8, VAR_11);
 if (VAR_12)
  goto out_free_buf;

 VAR_13 = VAR_11 + VAR_8.file_size - VAR_9;

 FUNC_1(VAR_15, VAR_10, VAR_11);
 FUNC_2(VAR_14, VAR_6.file_size);

 VAR_12 = FUNC_8(VAR_7, VAR_9, VAR_13);
 if (VAR_12)
  goto out_free_buf;

 VAR_12 = VAR_2;

 out_free_buf:
 FUNC_3(VAR_9);
 out:
 return VAR_12;
}
