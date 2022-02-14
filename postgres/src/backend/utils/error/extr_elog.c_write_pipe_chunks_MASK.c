
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* nuls; float is_last; int len; int data; int pid; } ;
struct TYPE_5__ {TYPE_1__ proto; } ;
typedef TYPE_2__ PipeProtoChunk ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_4 ;
 int FUNC_3 (int,TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(char *VAR_5, int VAR_6, int VAR_7)
{
 PipeProtoChunk VAR_8;
 int VAR_9 = FUNC_1(VAR_4);
 int VAR_10;

 FUNC_0(VAR_6 > 0);

 VAR_8.proto.nuls[0] = VAR_8.proto.nuls[1] = '\0';
 VAR_8.proto.pid = VAR_1;


 while (VAR_6 > VAR_3)
 {
  VAR_8.proto.is_last = (VAR_7 == VAR_0 ? 'F' : 'f');
  VAR_8.proto.len = VAR_3;
  FUNC_2(VAR_8.proto.data, VAR_5, VAR_3);
  VAR_10 = FUNC_3(VAR_9, &VAR_8, VAR_2 + VAR_3);
  (void) VAR_10;
  VAR_5 += VAR_3;
  VAR_6 -= VAR_3;
 }


 VAR_8.proto.is_last = (VAR_7 == VAR_0 ? 'T' : 't');
 VAR_8.proto.len = VAR_6;
 FUNC_2(VAR_8.proto.data, VAR_5, VAR_6);
 VAR_10 = FUNC_3(VAR_9, &VAR_8, VAR_2 + VAR_6);
 (void) VAR_10;
}
