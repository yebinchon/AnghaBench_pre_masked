
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_fprog {unsigned short len; struct sock_filter* filter; } ;
struct sock_filter {int dummy; } ;
struct bpf_labels {int count; } ;
typedef int ssize_t ;
typedef int msg2 ;
typedef int msg1 ;
typedef int filter ;
typedef int buf ;


 struct sock_filter VAR_0 ;
 struct sock_filter FUNC_0 (int) ;
 struct sock_filter VAR_1 ;
 struct sock_filter FUNC_1 (unsigned long,struct sock_filter) ;
 struct sock_filter FUNC_2 (int,struct sock_filter) ;
 struct sock_filter FUNC_3 (int,struct sock_filter) ;
 struct sock_filter FUNC_4 (unsigned long,struct sock_filter) ;
 struct sock_filter FUNC_5 (struct bpf_labels*,int ) ;
 struct sock_filter FUNC_6 (struct bpf_labels*,int ) ;
 struct sock_filter VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 struct sock_filter FUNC_7 (int ,struct sock_filter) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (struct bpf_labels*,struct sock_filter*,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int ,int,struct sock_fprog*,...) ;
 int VAR_16 ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (int ,unsigned long,char const*,int) ;
 int VAR_17 ;
 int VAR_18 ;

int FUNC_13(int VAR_19, char **VAR_20)
{
 struct bpf_labels VAR_21 = {
  .count = 0,
 };
 static const char VAR_22[] = "Please type something: ";
 static const char VAR_23[] = "You typed: ";
 char VAR_24[256];
 struct sock_filter VAR_25[] = {

  VAR_2,
  FUNC_7(VAR_9, VAR_0),
  FUNC_7(VAR_10, VAR_0),
  FUNC_7(VAR_12, FUNC_5(&VAR_21, VAR_18)),
  FUNC_7(VAR_11, FUNC_5(&VAR_21, VAR_16)),
  VAR_1,

  FUNC_6(&VAR_21, VAR_16),
  FUNC_0(0),
  FUNC_4(VAR_7, VAR_1),
  FUNC_0(1),
  FUNC_4((unsigned long)VAR_24, VAR_1),
  FUNC_0(2),
  FUNC_2(sizeof(VAR_24), VAR_1),
  VAR_0,

  FUNC_6(&VAR_21, VAR_18),
  FUNC_0(0),
  FUNC_1(VAR_8, FUNC_5(&VAR_21, VAR_17)),
  FUNC_1(VAR_6, FUNC_5(&VAR_21, VAR_17)),
  VAR_1,

  FUNC_6(&VAR_21, VAR_17),
  FUNC_0(1),
  FUNC_1((unsigned long)VAR_22, FUNC_5(&VAR_21, VAR_14)),
  FUNC_1((unsigned long)VAR_23, FUNC_5(&VAR_21, VAR_15)),
  FUNC_1((unsigned long)VAR_24, FUNC_5(&VAR_21, VAR_13)),
  VAR_1,

  FUNC_6(&VAR_21, VAR_14),
  FUNC_0(2),
  FUNC_3(sizeof(VAR_22), VAR_0),
  VAR_1,

  FUNC_6(&VAR_21, VAR_15),
  FUNC_0(2),
  FUNC_3(sizeof(VAR_23), VAR_0),
  VAR_1,

  FUNC_6(&VAR_21, VAR_13),
  FUNC_0(2),
  FUNC_3(sizeof(VAR_24), VAR_0),
  VAR_1,
 };
 struct sock_fprog VAR_26 = {
  .filter = VAR_25,
  .len = (unsigned short)(sizeof(VAR_25)/sizeof(VAR_25[0])),
 };
 ssize_t VAR_27;
 FUNC_8(&VAR_21, VAR_25, sizeof(VAR_25)/sizeof(*VAR_25));

 if (FUNC_10(VAR_3, 1, 0, 0, 0)) {
  FUNC_9("prctl(NO_NEW_PRIVS)");
  return 1;
 }

 if (FUNC_10(VAR_4, VAR_5, &VAR_26)) {
  FUNC_9("prctl(SECCOMP)");
  return 1;
 }
 FUNC_12(VAR_12, VAR_8, VAR_22, FUNC_11(VAR_22));
 VAR_27 = FUNC_12(VAR_11, VAR_7, VAR_24, sizeof(VAR_24)-1);
 VAR_27 = (VAR_27 > 0 ? VAR_27 : 0);
 FUNC_12(VAR_12, VAR_6, VAR_23, FUNC_11(VAR_23));
 FUNC_12(VAR_12, VAR_6, VAR_24, VAR_27);

 FUNC_12(VAR_12, VAR_6, VAR_23, FUNC_11(VAR_23)+2);
 return 0;
}
