
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int avail_in; unsigned int msg; scalar_t__ avail_out; int * next_in; } ;
typedef TYPE_1__ z_stream ;
struct info {int dummy; } ;
typedef int fz_context ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_4, struct info *VAR_5, const unsigned char *VAR_6, unsigned int VAR_7, z_stream *VAR_8)
{
 int VAR_9;

 VAR_8->next_in = (Bytef*)VAR_6;
 VAR_8->avail_in = VAR_7;

 VAR_9 = FUNC_1(VAR_8, VAR_3);
 if (VAR_9 != VAR_1 && VAR_9 != VAR_2)
  FUNC_0(VAR_4, VAR_0, "zlib error: %s", VAR_8->msg);
 if (VAR_8->avail_in != 0)
 {
  if (VAR_8->avail_out == 0)
   FUNC_0(VAR_4, VAR_0, "ran out of output before input");
  FUNC_0(VAR_4, VAR_0, "inflate did not consume buffer (%d remaining)", VAR_8->avail_in);
 }
}
