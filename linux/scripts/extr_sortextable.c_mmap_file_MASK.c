
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int st_size; int st_mode; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,char*,char const*) ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_1__*) ;
 void* FUNC_4 (int ,int ,int,int ,scalar_t__,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (char const*,int ) ;
 int FUNC_6 (char const*) ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void *FUNC_7(char const *VAR_9)
{
 void *VAR_10;

 VAR_5 = FUNC_5(VAR_9, VAR_2);
 if (VAR_5 < 0 || FUNC_3(VAR_5, &VAR_7) < 0) {
  FUNC_6(VAR_9);
  FUNC_1();
 }
 if (!FUNC_0(VAR_7.st_mode)) {
  FUNC_2(VAR_8, "not a regular file: %s\n", VAR_9);
  FUNC_1();
 }
 VAR_10 = FUNC_4(0, VAR_7.st_size, VAR_3|VAR_4, VAR_1,
      VAR_5, 0);
 if (VAR_10 == VAR_0) {
  VAR_6 = 1;
  FUNC_2(VAR_8, "Could not mmap file: %s\n", VAR_9);
  FUNC_1();
 }
 return VAR_10;
}
