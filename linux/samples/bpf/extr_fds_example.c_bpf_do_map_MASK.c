
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int*,int*) ;
 int FUNC_3 (int,int*,int*,int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int,char const*) ;
 int VAR_3 ;
 int FUNC_6 (char*,int,...) ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(const char *VAR_4, uint32_t VAR_5, uint32_t VAR_6,
        uint32_t VAR_7)
{
 int VAR_8, VAR_9;

 if (VAR_5 & VAR_2) {
  VAR_8 = FUNC_1();
  FUNC_6("bpf: map fd:%d (%s)\n", VAR_8, FUNC_7(VAR_3));
  FUNC_0(VAR_8 > 0);

  VAR_9 = FUNC_5(VAR_8, VAR_4);
  FUNC_6("bpf: pin ret:(%d,%s)\n", VAR_9, FUNC_7(VAR_3));
  FUNC_0(VAR_9 == 0);
 } else {
  VAR_8 = FUNC_4(VAR_4);
  FUNC_6("bpf: get fd:%d (%s)\n", VAR_8, FUNC_7(VAR_3));
  FUNC_0(VAR_8 > 0);
 }

 if ((VAR_5 & VAR_1) == VAR_1) {
  VAR_9 = FUNC_3(VAR_8, &VAR_6, &VAR_7, 0);
  FUNC_6("bpf: fd:%d u->(%u:%u) ret:(%d,%s)\n", VAR_8, VAR_6, VAR_7,
         VAR_9, FUNC_7(VAR_3));
  FUNC_0(VAR_9 == 0);
 } else if (VAR_5 & VAR_0) {
  VAR_9 = FUNC_2(VAR_8, &VAR_6, &VAR_7);
  FUNC_6("bpf: fd:%d l->(%u):%u ret:(%d,%s)\n", VAR_8, VAR_6, VAR_7,
         VAR_9, FUNC_7(VAR_3));
  FUNC_0(VAR_9 == 0);
 }

 return 0;
}
