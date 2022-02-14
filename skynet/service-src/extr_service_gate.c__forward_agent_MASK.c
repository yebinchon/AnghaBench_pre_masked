
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct gate {struct connection* conn; int hash; } ;
struct connection {void* client; void* agent; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1(struct gate * VAR_0, int VAR_1, uint32_t VAR_2, uint32_t VAR_3) {
 int VAR_4 = FUNC_0(&VAR_0->hash, VAR_1);
 if (VAR_4 >=0) {
  struct connection * VAR_5 = &VAR_0->conn[VAR_4];
  VAR_5->agent = VAR_2;
  VAR_5->client = VAR_3;
 }
}
