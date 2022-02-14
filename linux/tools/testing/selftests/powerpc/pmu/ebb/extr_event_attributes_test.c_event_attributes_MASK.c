
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int freq; int sample_period; int enable_on_exec; int inherit; unsigned long long config; scalar_t__ pinned; scalar_t__ exclusive; } ;
struct event {TYPE_1__ attr; int fd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct event*) ;
 int FUNC_4 (struct event*) ;
 int FUNC_5 (struct event*,int) ;
 int FUNC_6 (struct event*) ;
 int FUNC_7 (struct event*) ;
 scalar_t__ FUNC_8 (struct event*,int ) ;
 int FUNC_9 (struct event*,int ) ;
 int FUNC_10 (int) ;

int FUNC_11(void)
{
 struct event VAR_0, VAR_1;

 FUNC_1(!FUNC_2());

 FUNC_5(&VAR_0, 0x1001e);
 FUNC_6(&VAR_0);

 FUNC_0(FUNC_7(&VAR_0));
 FUNC_3(&VAR_0);


 FUNC_5(&VAR_0, 0x001e);
 FUNC_6(&VAR_0);

 FUNC_0(FUNC_7(&VAR_0) == 0);


 FUNC_5(&VAR_0, 0x2001e);
 FUNC_6(&VAR_0);
 VAR_0.attr.exclusive = 0;

 FUNC_0(FUNC_7(&VAR_0) == 0);


 FUNC_5(&VAR_0, 0x3001e);
 FUNC_6(&VAR_0);
 VAR_0.attr.freq = 1;

 FUNC_0(FUNC_7(&VAR_0) == 0);


 FUNC_5(&VAR_0, 0x4001e);
 FUNC_6(&VAR_0);
 VAR_0.attr.sample_period = 1;

 FUNC_0(FUNC_7(&VAR_0) == 0);


 FUNC_5(&VAR_0, 0x1001e);
 FUNC_6(&VAR_0);
 VAR_0.attr.enable_on_exec = 1;

 FUNC_0(FUNC_7(&VAR_0) == 0);


 FUNC_5(&VAR_0, 0x1001e);
 FUNC_6(&VAR_0);
 VAR_0.attr.inherit = 1;

 FUNC_0(FUNC_7(&VAR_0) == 0);


 FUNC_5(&VAR_1, 0x1001e);
 FUNC_6(&VAR_1);
 FUNC_0(FUNC_7(&VAR_1));

 FUNC_5(&VAR_0, 0x20002);
 FUNC_4(&VAR_0);


 FUNC_0(FUNC_9(&VAR_0, VAR_1.fd));
 FUNC_3(&VAR_1);
 FUNC_3(&VAR_0);


 FUNC_5(&VAR_1, 0x1001e);
 FUNC_6(&VAR_1);
 FUNC_0(FUNC_7(&VAR_1));

 FUNC_5(&VAR_0, 0x20002);


 FUNC_0(FUNC_9(&VAR_0, VAR_1.fd) == 0);
 FUNC_3(&VAR_1);


 FUNC_5(&VAR_1, 0x1001e);
 FUNC_6(&VAR_1);

 VAR_1.attr.config &= ~(1ull << 63);

 FUNC_0(FUNC_7(&VAR_1));

 FUNC_5(&VAR_0, 0x20002);
 FUNC_4(&VAR_0);


 FUNC_0(FUNC_9(&VAR_0, VAR_1.fd) == 0);
 FUNC_3(&VAR_1);


 FUNC_5(&VAR_1, 0x1001e);
 FUNC_6(&VAR_1);
 VAR_1.attr.exclusive = 0;

 FUNC_0(FUNC_7(&VAR_1) == 0);


 FUNC_5(&VAR_1, 0x1001e);
 FUNC_6(&VAR_1);
 VAR_1.attr.pinned = 0;

 FUNC_0(FUNC_7(&VAR_1) == 0);

 FUNC_5(&VAR_0, 0x1001e);
 FUNC_6(&VAR_0);

 FUNC_1(FUNC_10(1));
 FUNC_0(FUNC_8(&VAR_0, 0) == 0);

 return 0;
}
