
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffalo_tag3 {int dummy; } ;
struct buffalo_tag2 {int dummy; } ;
struct buffalo_tag {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (unsigned char*,scalar_t__) ;
 int FUNC_4 (unsigned char*) ;
 scalar_t__* VAR_1 ;
 scalar_t__ FUNC_5 (int ) ;
 int * VAR_2 ;
 unsigned char* FUNC_6 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ,unsigned char*,scalar_t__) ;
 int FUNC_8 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_9(void)
{
 unsigned char *VAR_5;
 ssize_t VAR_6;
 ssize_t VAR_7;
 ssize_t VAR_8;
 int VAR_9;
 int VAR_10 = -1;
 int VAR_11;

 if (VAR_0)
  VAR_7 = sizeof(struct buffalo_tag3);
 else if (VAR_3 == 1)
  VAR_7 = sizeof(struct buffalo_tag);
 else
  VAR_7 = sizeof(struct buffalo_tag2);

 VAR_8 = VAR_7;

 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  VAR_1[VAR_11] = FUNC_5(VAR_2[VAR_11]);
  if (VAR_1[VAR_11] < 0) {
   FUNC_0("unable to get size of '%s'", VAR_2[VAR_11]);
   goto out;
  }
  VAR_8 += VAR_1[VAR_11];
 }

 VAR_5 = FUNC_6(VAR_8);
 if (!VAR_5) {
  FUNC_0("no memory for buffer\n");
  goto out;
 }

 VAR_6 = VAR_7;
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  VAR_9 = FUNC_7(VAR_2[VAR_11], VAR_5 + VAR_6, VAR_1[VAR_11]);
  if (VAR_9) {
   FUNC_0("unable to read from file '%s'", VAR_2[VAR_11]);
   goto free_buf;
  }

  VAR_6 += VAR_1[VAR_11];
 }

 if (VAR_0)
  FUNC_3(VAR_5, VAR_1[0] + 200);
 else if (VAR_3 == 1)
  FUNC_1(VAR_5, VAR_8);
 else
  FUNC_2(VAR_5, VAR_8);

 VAR_9 = FUNC_8(VAR_4, VAR_5, VAR_8);
 if (VAR_9) {
  FUNC_0("unable to write to file '%s'", VAR_4);
  goto free_buf;
 }

 VAR_10 = 0;

free_buf:
 FUNC_4(VAR_5);
out:
 return VAR_10;
}
