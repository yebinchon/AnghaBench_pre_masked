
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int eof; } ;
struct tomoyo_io_buffer {TYPE_1__ r; } ;


 int FUNC_0 (struct tomoyo_io_buffer*,char*) ;

__attribute__((used)) static void FUNC_1(struct tomoyo_io_buffer *VAR_0)
{
 if (!VAR_0->r.eof) {
  FUNC_0(VAR_0, "2.6.0");
  VAR_0->r.eof = 1;
 }
}
