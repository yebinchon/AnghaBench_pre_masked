
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int,int ,int ) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(void)
{
 int VAR_6, VAR_7, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;

 VAR_7 = FUNC_10(1);
 if (!VAR_7)
  goto err;

 VAR_6 = FUNC_10(0);
 if (!VAR_6)
  goto err;

 if (FUNC_11())
  goto err;


 VAR_8 = FUNC_5(VAR_3);
 if (VAR_8 < 0)
  goto err;

 if (FUNC_7(VAR_3))
  goto err;

 if (FUNC_1(VAR_6, VAR_8, VAR_1,
       VAR_2)) {
  FUNC_8("Attaching prog to /foo");
  goto err;
 }

 FUNC_6("Attached DROP prog. This ping in cgroup /foo should fail...\n");
 FUNC_0(FUNC_12(VAR_4) != 0);


 VAR_9 = FUNC_5(VAR_0);
 if (VAR_9 < 0)
  goto err;

 if (FUNC_7(VAR_0))
  goto err;

 FUNC_6("Attached DROP prog. This ping in cgroup /foo/bar should fail...\n");
 FUNC_0(FUNC_12(VAR_4) != 0);

 if (FUNC_1(VAR_7, VAR_9, VAR_1,
       VAR_2)) {
  FUNC_8("Attaching prog to /foo/bar");
  goto err;
 }

 FUNC_6("Attached PASS prog. This ping in cgroup /foo/bar should pass...\n");
 FUNC_0(FUNC_12(VAR_4) == 0);

 if (FUNC_2(VAR_9, VAR_1)) {
  FUNC_8("Detaching program from /foo/bar");
  goto err;
 }

 FUNC_6("Detached PASS from /foo/bar while DROP is attached to /foo.\n"
        "This ping in cgroup /foo/bar should fail...\n");
 FUNC_0(FUNC_12(VAR_4) != 0);

 if (FUNC_1(VAR_7, VAR_9, VAR_1,
       VAR_2)) {
  FUNC_8("Attaching prog to /foo/bar");
  goto err;
 }

 if (FUNC_2(VAR_8, VAR_1)) {
  FUNC_8("Detaching program from /foo");
  goto err;
 }

 FUNC_6("Attached PASS from /foo/bar and detached DROP from /foo.\n"
        "This ping in cgroup /foo/bar should pass...\n");
 FUNC_0(FUNC_12(VAR_4) == 0);

 if (FUNC_1(VAR_7, VAR_9, VAR_1,
       VAR_2)) {
  FUNC_8("Attaching prog to /foo/bar");
  goto err;
 }

 if (!FUNC_1(VAR_7, VAR_9, VAR_1, 0)) {
  VAR_5 = 0;
  FUNC_8("Unexpected success attaching prog to /foo/bar");
  goto err;
 }

 if (FUNC_2(VAR_9, VAR_1)) {
  FUNC_8("Detaching program from /foo/bar");
  goto err;
 }

 if (!FUNC_2(VAR_8, VAR_1)) {
  VAR_5 = 0;
  FUNC_8("Unexpected success in double detach from /foo");
  goto err;
 }

 if (FUNC_1(VAR_7, VAR_8, VAR_1, 0)) {
  FUNC_8("Attaching non-overridable prog to /foo");
  goto err;
 }

 if (!FUNC_1(VAR_7, VAR_9, VAR_1, 0)) {
  VAR_5 = 0;
  FUNC_8("Unexpected success attaching non-overridable prog to /foo/bar");
  goto err;
 }

 if (!FUNC_1(VAR_7, VAR_9, VAR_1,
        VAR_2)) {
  VAR_5 = 0;
  FUNC_8("Unexpected success attaching overridable prog to /foo/bar");
  goto err;
 }

 if (!FUNC_1(VAR_7, VAR_8, VAR_1,
        VAR_2)) {
  VAR_5 = 0;
  FUNC_8("Unexpected success attaching overridable prog to /foo");
  goto err;
 }

 if (FUNC_1(VAR_6, VAR_8, VAR_1, 0)) {
  FUNC_8("Attaching different non-overridable prog to /foo");
  goto err;
 }

 goto out;

err:
 VAR_10 = 1;

out:
 FUNC_4(VAR_8);
 FUNC_4(VAR_9);
 FUNC_3();
 if (!VAR_10)
  FUNC_9("#override:PASS\n");
 else
  FUNC_9("#override:FAIL\n");
 return VAR_10;
}
