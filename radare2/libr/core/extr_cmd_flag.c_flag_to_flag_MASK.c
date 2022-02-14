
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct flag_to_flag_t {scalar_t__ next; scalar_t__ offset; } ;
struct TYPE_3__ {scalar_t__ offset; int flags; } ;
typedef TYPE_1__ RCore ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,int ,struct flag_to_flag_t*) ;
 int FUNC_1 (char const*,int ) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(RCore *VAR_2, const char *VAR_3) {
 FUNC_1 (VAR_3, 0);
 VAR_3 = FUNC_2 (VAR_3);
 struct flag_to_flag_t VAR_4 = { .next = VAR_0, .offset = VAR_2->offset };
 FUNC_0 (VAR_2->flags, VAR_3, VAR_1, &VAR_4);
 if (VAR_4.next != VAR_0 && VAR_4.next > VAR_2->offset) {
  return VAR_4.next - VAR_2->offset;
 }
 return 0;
}
