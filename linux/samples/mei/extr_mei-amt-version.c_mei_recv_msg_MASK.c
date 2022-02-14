
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei {int fd; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct mei*) ;
 int FUNC_1 (struct mei*,char*,scalar_t__,int ) ;
 int FUNC_2 (struct mei*,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,unsigned char*,scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct mei *VAR_1, unsigned char *VAR_2,
   ssize_t VAR_3, unsigned long VAR_4)
{
 ssize_t VAR_5;

 FUNC_2(VAR_1, "call read length = %zd\n", VAR_3);

 VAR_5 = FUNC_3(VAR_1->fd, VAR_2, VAR_3);
 if (VAR_5 < 0) {
  FUNC_1(VAR_1, "read failed with status %zd %s\n",
    VAR_5, FUNC_4(VAR_0));
  FUNC_0(VAR_1);
 } else {
  FUNC_2(VAR_1, "read succeeded with result %zd\n", VAR_5);
 }
 return VAR_5;
}
