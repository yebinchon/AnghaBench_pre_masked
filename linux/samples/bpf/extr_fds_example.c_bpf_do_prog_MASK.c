
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int fd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int,char const*) ;
 int FUNC_3 (char const*) ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (int,int ,int ,int*,int) ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(const char *VAR_4, uint32_t VAR_5, const char *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 if (VAR_5 & VAR_0) {
  VAR_7 = FUNC_3(VAR_6);
  FUNC_5("bpf: prog fd:%d (%s)\n", VAR_7, FUNC_7(VAR_3));
  FUNC_0(VAR_7 > 0);

  VAR_9 = FUNC_2(VAR_7, VAR_4);
  FUNC_5("bpf: pin ret:(%d,%s)\n", VAR_9, FUNC_7(VAR_3));
  FUNC_0(VAR_9 == 0);
 } else {
  VAR_7 = FUNC_1(VAR_4);
  FUNC_5("bpf: get fd:%d (%s)\n", VAR_7, FUNC_7(VAR_3));
  FUNC_0(VAR_7 > 0);
 }

 VAR_8 = FUNC_4("lo");
 FUNC_0(VAR_8 > 0);

 VAR_9 = FUNC_6(VAR_8, VAR_1, VAR_2, &VAR_7, sizeof(VAR_7));
 FUNC_5("bpf: sock:%d <- fd:%d attached ret:(%d,%s)\n", VAR_8, VAR_7,
        VAR_9, FUNC_7(VAR_3));
 FUNC_0(VAR_9 == 0);

 return 0;
}
