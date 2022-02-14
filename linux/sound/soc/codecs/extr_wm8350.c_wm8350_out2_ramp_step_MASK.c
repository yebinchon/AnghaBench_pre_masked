
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350_output {scalar_t__ ramp; int left_vol; int right_vol; } ;
struct wm8350_data {struct wm8350* wm8350; struct wm8350_output out2; } ;
struct wm8350 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct wm8350*,int ) ;
 int FUNC_1 (struct wm8350*,int ,int) ;
 int FUNC_2 (struct wm8350*,int ,int ) ;

__attribute__((used)) static inline int FUNC_3(struct wm8350_data *VAR_9)
{
 struct wm8350_output *VAR_10 = &VAR_9->out2;
 struct wm8350 *VAR_11 = VAR_9->wm8350;
 int VAR_12 = 0, VAR_13 = 0;
 u16 VAR_14, VAR_15;


 VAR_14 = FUNC_0(VAR_11, VAR_0);
 VAR_15 = (VAR_14 & VAR_3) >> VAR_1;
 if (VAR_10->ramp == VAR_7) {

  if (VAR_15 < VAR_10->left_vol) {
   VAR_15++;
   VAR_14 &= ~VAR_3;
   FUNC_1(VAR_11, VAR_0,
      VAR_14 | (VAR_15 << VAR_1));
  } else
   VAR_12 = 1;
 } else if (VAR_10->ramp == VAR_6) {

  if (VAR_15 > 0) {
   VAR_15--;
   VAR_14 &= ~VAR_3;
   FUNC_1(VAR_11, VAR_0,
      VAR_14 | (VAR_15 << VAR_1));
  } else
   VAR_12 = 1;
 } else
  return 1;


 VAR_14 = FUNC_0(VAR_11, VAR_8);
 VAR_15 = (VAR_14 & VAR_4) >> VAR_2;
 if (VAR_10->ramp == VAR_7) {

  if (VAR_15 < VAR_10->right_vol) {
   VAR_15++;
   VAR_14 &= ~VAR_4;
   FUNC_1(VAR_11, VAR_8,
      VAR_14 | (VAR_15 << VAR_2));
  } else
   VAR_13 = 1;
 } else if (VAR_10->ramp == VAR_6) {

  if (VAR_15 > 0) {
   VAR_15--;
   VAR_14 &= ~VAR_4;
   FUNC_1(VAR_11, VAR_8,
      VAR_14 | (VAR_15 << VAR_2));
  } else
   VAR_13 = 1;
 }


 if (!VAR_12 || !VAR_13)
  FUNC_2(VAR_11, VAR_0, VAR_5);

 return VAR_12 & VAR_13;
}
