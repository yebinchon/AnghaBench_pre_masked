
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * rodata; int * data; } ;
struct bpf_object {TYPE_1__ sections; } ;
struct bpf_map {scalar_t__ libbpf_type; int name; int fd; } ;
typedef int errmsg ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int*,int *,int ) ;
 int VAR_4 ;
 char* FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct bpf_object *VAR_5, struct bpf_map *VAR_6)
{
 char *VAR_7, VAR_8[VAR_3];
 int VAR_9, VAR_10 = 0;
 __u8 *VAR_11;


 if (VAR_6->libbpf_type == VAR_0)
  return 0;

 VAR_11 = VAR_6->libbpf_type == VAR_1 ?
        VAR_5->sections.data : VAR_5->sections.rodata;

 VAR_9 = FUNC_1(VAR_6->fd, &VAR_10, VAR_11, 0);

 if (!VAR_9 && VAR_6->libbpf_type == VAR_2) {
  VAR_9 = FUNC_0(VAR_6->fd);
  if (VAR_9) {
   VAR_7 = FUNC_2(VAR_4, VAR_8, sizeof(VAR_8));
   FUNC_3("Error freezing map(%s) as read-only: %s\n",
       VAR_6->name, VAR_7);
   VAR_9 = 0;
  }
 }
 return VAR_9;
}
