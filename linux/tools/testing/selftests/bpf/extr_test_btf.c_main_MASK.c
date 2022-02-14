
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dedup_test; scalar_t__ info_raw_test; scalar_t__ pprint_test; scalar_t__ file_test; scalar_t__ get_info_test; scalar_t__ raw_test; scalar_t__ always_log; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char**) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;

int FUNC_9(int VAR_2, char **VAR_3)
{
 int VAR_4 = 0;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 if (VAR_1.always_log)
  FUNC_0(VAR_0);

 if (VAR_1.raw_test)
  VAR_4 |= FUNC_8();

 if (VAR_1.get_info_test)
  VAR_4 |= FUNC_5();

 if (VAR_1.file_test)
  VAR_4 |= FUNC_4();

 if (VAR_1.pprint_test)
  VAR_4 |= FUNC_7();

 if (VAR_1.info_raw_test)
  VAR_4 |= FUNC_6();

 if (VAR_1.dedup_test)
  VAR_4 |= FUNC_3();

 if (VAR_1.raw_test || VAR_1.get_info_test || VAR_1.file_test ||
     VAR_1.pprint_test || VAR_1.info_raw_test || VAR_1.dedup_test)
  goto done;

 VAR_4 |= FUNC_8();
 VAR_4 |= FUNC_5();
 VAR_4 |= FUNC_4();
 VAR_4 |= FUNC_6();
 VAR_4 |= FUNC_3();

done:
 FUNC_2();
 return VAR_4;
}
