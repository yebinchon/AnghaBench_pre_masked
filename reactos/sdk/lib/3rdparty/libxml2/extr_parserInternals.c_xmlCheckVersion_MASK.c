
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_2 ;
 int FUNC_2 () ;

void
FUNC_3(int VAR_3) {
    int VAR_4 = (int) VAR_0;

    FUNC_2();

    if ((VAR_4 / 10000) != (VAR_3 / 10000)) {
 FUNC_1(VAR_2,
  "Fatal: program compiled against libxml %d using libxml %d\n",
  (VAR_3 / 10000), (VAR_4 / 10000));
 FUNC_0(VAR_1,
  "Fatal: program compiled against libxml %d using libxml %d\n",
  (VAR_3 / 10000), (VAR_4 / 10000));
    }
    if ((VAR_4 / 100) < (VAR_3 / 100)) {
 FUNC_1(VAR_2,
  "Warning: program compiled against libxml %d using older %d\n",
  (VAR_3 / 100), (VAR_4 / 100));
    }
}
